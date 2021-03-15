#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"







int main()
try{
	using namespace Graph_lib;

	Simple_window win{Point{100, 100}, 800, 1000, "Ablak"};
	int l=800;
	int w=800;
	int l_grid=100;
	int w_grid=100;

	Lines grid;

	for(int i=l_grid; i < w; i+=l_grid){
		grid.add(Point{i,0},Point{i,w});

	}
	for(int i=w_grid; i < l; i+=w_grid){
		grid.add(Point{0,i},Point{l,i});
		
	}

	Rectangle r1{Point {100,100},100,100};
	Rectangle r2{Point {200,200},100,100};
	Rectangle r3{Point {300,300},100,100};
	Rectangle r4{Point {400,400},100,100};
	Rectangle r5{Point {500,500},100,100};
	Rectangle r6{Point {600,600},100,100};
	Rectangle r7{Point {700,700},100,100};
	Rectangle r8{Point {0,0},100,100};

	r1.set_fill_color(Color::red);
	r2.set_fill_color(Color::red);
	r3.set_fill_color(Color::red);
	r4.set_fill_color(Color::red);
	r5.set_fill_color(Color::red);
	r6.set_fill_color(Color::red);
	r7.set_fill_color(Color::red);
	r8.set_fill_color(Color::red);

	Image i{Point {0,300},"foka.jpeg"};
	Image k{Point {100,600},"foka.jpeg"};
	Image j{Point {600,100},"foka.jpeg"};

	win.attach(i);
	win.attach(k);
	win.attach(j);


	win.attach(r1);
	win.attach(r2);
	win.attach(r3);
	win.attach(r4);
	win.attach(r5);
	win.attach(r6);
	win.attach(r7);
	win.attach(r8);

	win.attach(grid);

	Image q{Point{0,0}, "sor.jpeg"};
	win.attach(q);
	win.wait_for_button();

	for(int zz=0; zz<8; zz++){
		for(int z=0; z<8; z++){
			q.move(100,0);
			win.wait_for_button();
		}
		q.move(-700,100);
		win.wait_for_button();
	}


	win.wait_for_button();





}
catch(exception& e){
	cerr <<"exception: " << e.what() << '\n';
	return 1;
}
catch(...){
	cerr <<"error\n";
	return 2;
}