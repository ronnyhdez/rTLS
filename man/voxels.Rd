% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/voxels.R
\name{voxels}
\alias{voxels}
\title{Voxelization of a Point Cloud}
\usage{
voxels(cloud, edge_length, threads = 1L, obj.voxels = TRUE)
}
\arguments{
\item{cloud}{A \code{data.table} with *XYZ* coordinates in the first three columns.}

\item{edge_length}{A positive \code{numeric} vector with the voxel-edge length for the x, y, and z coordinates. It use the same dimensional scale of the point cloud.}

\item{threads}{An \code{integer} specifying the number of threads to use for parallel processing. Experiment to see what works best for your data on your hardware.}

\item{obj.voxels}{Logical. If \code{obj.voxel = TRUE}, it returns an object of class \code{"voxels"}, If \code{obj.voxel = FALSE}, it returns a \code{data.table} with the coordinates of the voxels created and the number of points in each voxel. \code{TRUE} as default.}
}
\value{
If \code{obj.voxels == TRUE}, it return an object of class \code{"voxels"} which contain a list with the points used to create the voxels, the parameter \code{edge_length}, and the \code{voxels} created. If \code{FALSE}, it returns a \code{data.table} with the coordinates of the voxels created and the number of points in each voxel.
}
\description{
Create cubes of a given distance in a point cloud though their voxelization. It use a modify version of the code used in Greaves et al. 2015.
}
\details{
Voxels are created from the negative to the positive *XYZ* coordinates.
}
\examples{
data("pc_tree")

###Create cube of a size of 0.5.
voxels(pc_tree, edge_length = c(0.5, 0.5, 0.5))


}
\references{
Greaves, H. E., Vierling, L. A., Eitel, J. U., Boelman, N. T., Magney, T. S., Prager, C. M., & Griffin, K. L. (2015). Estimating aboveground biomass and leaf area of low-stature Arctic shrubs with terrestrial LiDAR. Remote Sensing of Environment, 164, 26-35.
}
\seealso{
\code{\link{voxels_counting}}, \code{\link{plot_voxels}}, \code{\link{summary_voxels}}
}
\author{
J. Antonio Guzmán Q.
}
