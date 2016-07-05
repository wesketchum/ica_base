cet_make_library( LIBRARY_NAME ica_base_A2795Board
		  SOURCE Cudpux.cc A2795Board.cc veto.cc
		  LIBRARIES
		        CAENComm
		)

cet_make_library( LIBRARY_NAME ica_base_VetoUDP
		  SOURCE VetoUDP.cc
		  LIBRARIES
		        ica_base_A2795Board
		)
cet_make_library( LIBRARY_NAME ica_base_PhysCrate
		  SOURCE PhysCrate.cc
		  LIBRARIES
		        ica_base_A2795Board
		)
cet_make_exec(VetoUDP
  SOURCE VetoUDP_main.cc
  LIBRARIES
  ica_base_VetoUDP
  )
  
	      
install_headers()

