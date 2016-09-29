
// 2016 - Christoph Kloss, DCS Computing


// TODO here, add reference to license!


// this code is really bad and for git training purposes only!

double x1[2] = {-0.01,-0.1};
double x2[2] = {0.01,0.1};
double v1[2] = {0.,1.};
double v2[2] = {0.,-1.};
double r1 = 0.02, r2 = 0.02;

double k = 1000, gamma = 0.5;
double t = 0., dt = 1e-5;
double T = 1.;


while(t < T)
{

    // force calculation
    double dist = sqrt((x1[0]-x2[0])*(x1[0]-x2[0])+(x1[1]-x2[1])*(x1[1]-x2[1]) - r1-r2;
    if(dist < 0.)
        TODO - add force calculation   

    TODO - add integration
	
    TODO - add some output to the screen (printf or cout)

    TODO - add dt to t
}


THIS LINE IS FROM CHRISTOPH AND WILL CAUSE A PROBLEM.....

