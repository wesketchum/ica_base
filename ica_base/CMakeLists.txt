cet_make_library( LIBRARY_NAME ica_base_A2795Board
		  SOURCE Cudpux.cc A2795Board.cc veto.cc
		  LIBRARIES
		        CAENComm
		)

cet_make_library( LIBRARY_NAME ica_base_PhysCrate
		  SOURCE PhysCrate.cc
		  LIBRARIES
		        ica_base_A2795Board
		)

install_headers()

