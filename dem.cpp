
// 2016 - Christoph Kloss, DCS Computing


//                     GNU GENERAL PUBLIC LICENSE
//    Version 3, 29 June 2007
// Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/> Everyone is permitted to copy and distribute verbatim copies  of this license document, but changing it is not allowed.
//   The GNU General Public License is a free, copyleft license for
// software and other kinds of works.
// For T-MAPPP training event in Lille


// this code is really bad and for git training purposes only!

double x1[2] = {-0.01,-0.1};
double x2[2] = {0.01,0.1};
double v1[2] = {0.,1.};
double v2[2] = {0.,-1.};
double r1 = 0.02, r2 = 0.02;

double k = 1000, gamma = 0.5;
double t = 0., dt = 1e-5;
double T = 1.;

int nPart = 2;
double f[nPart][2] = {0.0, 0.0};
double fabs = 0.0;

while(t < T)
{

    // force calculation
    double dist = sqrt((x1[0]-x2[0])*(x1[0]-x2[0])+(x1[1]-x2[1])*(x1[1]-x2[1])) - r1-r2;
    double Urel = sqrt((v1[0]-v2[0])*(v1[0]-v2[0])+(v1[1]-v2[1])*(v1[1]-v2[1]));
    if(dist < 0.)
	fabs = k*dist + gamma*Urel;

    // center-center particle unit vector
    double ei = (x1[0]-x2[0])/(dist+r1+r2);
    double ej = (x1[1]-x2[1])/(dist+r1+r2);

    // force on particles
    for(iPart = 0; iPart<nPart; iPart++){
	f[iPart][0] = fabs*ei;
	f[iPart][1] = fabs*ej;
    }

    TODO - add integration
	
    TODO - add some output to the screen (printf or cout)

    t += dt;
}

//Sasha is the Best!!!
//Rahul ola ola!!!!!
// username test
