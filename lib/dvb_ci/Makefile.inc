noinst_LIBRARIES += dvb_ci/libenigma_dvb_ci.a

if HYPERCUBE
dvb_ci_libenigma_dvb_ci_a_SOURCES = \
	dvbci.cpp \
	dvbci_ui.cpp
else
dvb_ci_libenigma_dvb_ci_a_SOURCES = \
	dvb_ci/dvbci.cpp \
	dvb_ci/dvbci_appmgr.cpp \
	dvb_ci/dvbci_camgr.cpp \
	dvb_ci/dvbci_datetimemgr.cpp \
	dvb_ci/dvbci_mmi.cpp \
	dvb_ci/dvbci_resmgr.cpp \
	dvb_ci/dvbci_session.cpp \
	dvb_ci/dvbci_ui.cpp \
	dvb_ci/dvbci_ccmgr.cpp \
	dvb_ci/dvbci_hlcmgr.cpp \
	dvb_ci/dvbci_host_ctrl.cpp \
	dvb_ci/dvbci_cam_upgrade.cpp \
	dvb_ci/dvbci_app_mmi.cpp \
	dvb_ci/aes_xcbc_mac.cpp \
	dvb_ci/descrambler.cpp \
	dvb_ci/res_content_ctrl.cpp
endif

dvbciincludedir = $(pkgincludedir)/lib/dvb_ci
if HYPERCUBE
dvbciinclude_HEADERS = \
	dvbci.h \
	dvbci_ui.h
else
dvbciinclude_HEADERS = \
	dvb_ci/dvbci.h \
	dvb_ci/dvbci_appmgr.h \
	dvb_ci/dvbci_camgr.h \
	dvb_ci/dvbci_datetimemgr.h \
	dvb_ci/dvbci_mmi.h \
	dvb_ci/dvbci_resmgr.h \
	dvb_ci/dvbci_session.h \
	dvb_ci/dvbci_ui.h \
	dvb_ci/dvbci_ccmgr.h \
	dvb_ci/dvbci_hlcmgr.h \
	dvb_ci/dvbci_host_ctrl.h \
	dvb_ci/dvbci_cam_upgrade.h \
	dvb_ci/dvbci_app_mmi.h \
	dvb_ci/_dh_params.h \
	dvb_ci/aes_xcbc_mac.h \
	dvb_ci/descrambler.h \
	dvb_ci/res_content_ctrl.h
endif
