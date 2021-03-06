% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/canopy_structure.R
\name{canopy_structure}
\alias{canopy_structure}
\title{Canopy Structure}
\usage{
canopy_structure(
  TLS.type,
  scan,
  zenith.range,
  zenith.rings,
  azimuth.range,
  vertical.resolution,
  TLS.pulse.counts,
  TLS.resolution = NULL,
  TLS.coordinates = c(0, 0, 0),
  TLS.frame = NULL,
  TLS.angles = NULL,
  threads = 1
)
}
\arguments{
\item{TLS.type}{A \code{character} describing is the TLS used. It most be one of \code{"single"} return, \code{"multiple"} return, or \code{"fixed.angle"} scanner.}

\item{scan}{If \code{TLS.type} is equal to \code{"single"} or \code{"fixed.angle"}, a \code{data.table} with three columns describing *XYZ* coordinates of the discrete return. If
\code{TLS.type} is equal to \code{"multiple"}, a \code{data.table} with four columns describing *XYZ* coordinates and the target count pulses. Currently, \code{"fixed.angle"} present errors, use with discretion.}

\item{zenith.range}{If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, a \code{numeric} vector of length two describing the \code{min} and \code{max} range of the zenith angle to use.
Theoretically, the \code{max} range should be lower than 90 degrees.}

\item{zenith.rings}{If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, a \code{numeric} vector of length one describing the number of zenith rings to use between \code{zenith.range}.
This is used to estimate the frequency of laser shots from the scanner and returns in \code{scan}. If \code{TLS.type = "fixed.angle"}, \code{zenith.rings = 1} be default.}

\item{azimuth.range}{A \code{numeric} vector of length two describing the range of the azimuth angle to use. Theoretically, it should be between 0 and 360 degrees.}

\item{vertical.resolution}{A \code{numeric} vector of length one describing the vertical resolution to extract the vertical profiles. Low values lead to more variable profiles.
The scale used needs to be in congruence with the scale of \code{scan}.}

\item{TLS.pulse.counts}{If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, a \code{numeric} vector of length two describing the horizontal and vertical pulse counts of the scanner.
If \code{TLS.type} is equal to \code{"fixed.angle"}, a \code{numeric} vector of length one describing the horizontal pulse counts resolution.
Preferred parameter over \code{TLS.resolution} to estimate the number of pulses.}

\item{TLS.resolution}{If \code{TLS.pulse.counts = NULL}, the code use the angles resolution to estimate the pulse counts in a given \code{TLS.frame}. If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, a \code{numeric} vector of length two describing the horizontal and vertical angle resolution of the scanner.
If \code{TLS.type} is equal to \code{"fixed.angle"}, a \code{numeric} vector of length one describing the horizontal angle resolution.}

\item{TLS.coordinates}{A \code{numeric} vector of length three describing the scanner coordinates within \code{scan}.
It assumes that the coordinates are \code{c(X = 0, Y = 0, Z = 0)} for default.}

\item{TLS.frame}{If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, a \code{numeric} vector of length four describing the \code{min} and \code{max} of the zenith and azimuth angle of the scanner frame.
If \code{TLS.type = "fixed.angle"}, a \code{numeric} vector of length three describing the fixed zenith angle and the \code{min} and \code{max} of the azimuth angle of the scanner frame.
If \code{NULL}, it assumes that a complete hemisphere (\code{c(zenith.min = 0, zenith.max = 90, azimuth.min = 0, azimuth.max = 360)}), or a cone projection (\code{c(zenith = 57.5, azimuth.min = 0, azimuth.max = 360)}) depending on \code{TLS.type}.}

\item{TLS.angles}{A \code{numeric} vector of length three describing the roll (*X*), pitch (*Y*), and yaw (*Z*) angles of the scanner during the scan.
If \code{NULL}, it assumes that there is no need to to correction of angles.
This needs to be used if \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, since it assumes that \code{"fixed.angle"} scanner is previously balanced. \code{NULL} as default.}

\item{threads}{An \code{integer} specifying the number of threads to use. Experiment to see what works best for your data on your hardware.}
}
\value{
For any \code{TLS.type}, it returns a \code{data.table} with the height profiles defined by \code{vertical.resolution}, the gap probability based on the \code{zenith.range} and \code{zenith.rings}, and
the accumulative L(z) profiles based on the closest zenith ring to 57.5 degrees (hinge angle). If \code{TLS.type} is equal to \code{"fixed.angle"}, it returns f(z) or commonly named PAVD based on
on the ratio of the derivative of L(z) and the derivative of height (z). If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, it returns the normalized average weighting L/LAI, and PAVD: based
on the L (hinge angle) at the highest height and the ratio between the derivative of L/LAI average weighted and the derivative of z.
}
\description{
Estimates the canopy structure from a discrete returns scan from different TLS.
}
\details{
Since \code{scan} describes discrete returns measured by the TLS, \code{canopy_structre} first simulates the number of pulses emitted based on Danson et al. (2007). The simulated pulses are
created based on the TLS properties (\code{TLS.pulse.counts, TLS.resolution, TLS.frame}) assuming that the scanner is perfectly balance. Then these pulses are rotated (\code{\link{rotate3D}}) based on the \code{TLS.angles}
roll, pitch, and yaw, and move to \code{TLS.coordintates} to simulate the positioning of the scanner during the \code{scan}. Rotated simulated-pulses of interest and \code{scan} returns are then extracted based on the \code{zenith.range} and \code{azimuth.range} for a given number of \code{zenith.rings}, \code{azimuth.rings} and vertical profiles.
The probability of gap (Pgap) is then estimated using the frequency of pulses and returns. For \code{TLS.type = "multiple"}, the frequency of returns is estimated using the sum of 1/target count following Lovell et al. (2011).

Using the Pgap estimated per each zenith ring and vertical profile, \code{canopy_structure} then estimates the accumulative L(z) profiles based on the closest
zenith ring to 57.5 (hinge region) and, if \code{TLS.type = "fixed.angle"}, the f(z) or commonly named PAVD based on the ratio of the
derivative of L(z) and height (z) following Jupp et al. 2009 (Equation 18). If \code{TLS.type} is equal to \code{"single"} or \code{"multiple"}, \code{canopy_structure} also
estimates the normalized average weighted L/LAI, and then PAVD based on the L (hinge angle) at the highest height (LAI) and the ratio between the derivative
of L/LAI (average weighted) and the derivative of z (Jupp et al. 2009; Equation 21).

Jupp et al. 2009 excludes the zero zenith or fist ring to conduct the average weighted L/LAI estimations, \code{canopy_structre} does not excludes this sections since it depends on the regions of interest of the user.
Therefore, user should consider this difference since it may introduce more variability to profile estimations.
}
\examples{

\donttest{
data(TLS_scan)
#Using a multiple return file
#Select the four columns required
TLS_scan <- TLS_scan[, 1:4]

#This will take a while#
a <- canopy_structure(TLS.type = "multiple",
                 scan = TLS_scan,
                 zenith.range = c(50, 70),
                 zenith.rings = 4,
                 azimuth.range = c(0, 360),
                 vertical.resolution = 0.25,
                 TLS.pulse.counts = c(2082, 580),
                 TLS.frame = c(30, 130.024, 0, 359.90),
                 TLS.angles =  c(1.026, 0.760, -110.019))

#Using a single return file

data(TLS_scan)
#Subset to first return observations
TLS_scan <- TLS_scan[Target_index == 1, 1:3]

#This will take a while#
canopy_structure(TLS.type = "single",
                 scan = TLS_scan,
                 zenith.range = c(50, 70),
                 zenith.rings = 4,
                 azimuth.range = c(0, 360),
                 vertical.resolution = 0.25,
                 TLS.pulse.counts = c(2082, 580),
                 TLS.frame = c(30, 130.024, 0, 359.90),
                 TLS.angles =  c(1.026, 0.760, -110.019))
}

}
\references{
Danson F.M., Hetherington D., Morsdorf F., Koetz B., Allgower B. 2007. Forest canopy gap fraction from terrestrial laser scanning. IEEE Geosci. Remote Sensing Letters 4:157-160. doi: 10.1109/LGRS.2006.887064

Lovell J.L., Jupp D.L.B., van Gorsel E., Jimenez-Berni J., Hopkinson C., Chasmer L. 2011. Foliage profiles from ground based waveform and discrete point LiDAR. In: SilviLaser 2011, Hobart, Australia, 16–20 October 2011.

Jupp D.L.B., Culvenor D.S., Lovell J.L., Newnham G.J., Strahler A.H., Woodcock C.E. 2009. Estimating forest LAI profiles and structural parameters using a ground-based laser called “Echidna®”. Tree Physiology 29(2): 171-181. doi: 10.1093/treephys/tpn022
}
\author{
J. Antonio Guzmán Q.
}
