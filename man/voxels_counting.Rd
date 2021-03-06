% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/voxels_counting.R
\name{voxels_counting}
\alias{voxels_counting}
\title{Voxels Counting}
\usage{
voxels_counting(
  cloud,
  edge_sizes = NULL,
  min_size,
  length_out = 10,
  bootstrap = FALSE,
  R = NULL,
  progress = TRUE,
  parallel = FALSE,
  threads = NULL
)
}
\arguments{
\item{cloud}{A \code{data.table} with xyz coordinates of the point clouds in the first three columns.}

\item{edge_sizes}{A positive \code{numeric} vector describing the edge length of the different cubes to perform. If \code{NULL}, it use edge sizes by default based on the largest range of XYZ and \code{min_size}.}

\item{min_size}{A positive \code{numeric} vector of length 1 describing the minimum cube edge length to perform. This is required if \code{edge_sizes = NULL}.}

\item{length_out}{A positive \code{interger} of length 1 indicating the number of different edge lengths to use. This is required if \code{edge_sizes  = NULL}.}

\item{bootstrap}{Logical. If \code{TRUE}, it computes a bootstrap on the H index calculations. \code{FALSE} as default.}

\item{R}{A positive \code{integer} of length 1 indicating the number of bootstrap replicates. This need to be used if \code{bootstrap = TRUE}.}

\item{progress}{Logical, if \code{TRUE} displays a graphical progress bar. \code{TRUE} as default.}

\item{parallel}{Logical, if \code{TRUE} it uses a parallel processing for the voxelization. \code{FALSE} as default.}

\item{threads}{An \code{integer} >= 0 describing the number of threads to use. This need to be used if \code{parallel = TRUE}.}
}
\value{
A \code{data.table} with the summary of the voxels created with their features.
}
\description{
Creates cube like voxels of different size on a point cloud using the \code{\link{voxels}} function, and then return a \code{\link{summary_voxels}} of their features.
}
\examples{

data(pc_tree)

#Applying voxels counting.
voxels_counting(pc_tree, min_size = 2)

#Voxels counting using bootstrap on the H indexes with 1000 repetitions.
voxels_counting(pc_tree, min_size = 2, bootstrap = TRUE, R = 1000)


}
\seealso{
\code{\link{voxels}}, \code{\link{summary_voxels}}, \code{\link{plot_voxels}}
}
\author{
J. Antonio Guzmán Q.
}
