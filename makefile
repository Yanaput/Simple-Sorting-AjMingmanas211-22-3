compileBub: main_bubble.cpp 
	 g++  main_bubble.cpp -o bubble

compileSel: main_selection.cpp 
	 g++  main_selection.cpp -o selection

compileIns: main_insertion.cpp 
	 g++  main_insertion.cpp -o insertion

runSel: selection
	  ./selection 

runBub: bubble
	 ./bubble 

runIns: insertion
	./insertion 

clean: 
	 rm 