#include "nearest_neighbor_brute_force.h"
#include <limits>// std::numeric_limits<double>::infinity();

void nearest_neighbor_brute_force(
	const Eigen::MatrixXd& points,
	const Eigen::RowVector3d& query,
	int& I,
	double& sqrD)
{
	////////////////////////////////////////////////////////////////////////////
	// Replace with your code here:
	I = -1;
	sqrD = std::numeric_limits<double>::infinity();
	//declare
	//Loop through points
	for (int i = 0; i < points.rows(); i++) {
		//Calculate the distance to the query
		double dCur = (points.row(i) - query).squaredNorm();
		//Check if its the closest
		if (dCur < sqrD) {
			//Log it if it is the closest
			sqrD = dCur;
			I = i;
		}
	}
	////////////////////////////////////////////////////////////////////////////
}
