//Generated By SceModuleGenerator
#include "pset_libSceNpAuth.h"


int PSET_SYSV_ABI Pset_sceNpAuthAbortRequest(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthAbortRequest");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthCreateAsyncRequest(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthCreateAsyncRequest");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthCreateRequest(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthCreateRequest");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthDeleteRequest(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthDeleteRequest");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthGetAuthorizationCode(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthGetAuthorizationCode");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthGetAuthorizationCodeA(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthGetAuthorizationCodeA");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthGetIdToken(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthGetIdToken");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthGetIdTokenA(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthGetIdTokenA");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthPollAsync(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthPollAsync");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthSetTimeout(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthSetTimeout");
	return PSET_OK;
}

int PSET_SYSV_ABI Pset_sceNpAuthWaitAsync(void)
{
	PSET_LOG_UNIMPLEMENTED("unimplemented function: Pset_sceNpAuthWaitAsync");
	return PSET_OK;
}

static const SPSET_LIB_EXPORT_SYSMBOL gSymTable_libSceNpAuth_libSceNpAuth[] =
{
 { 0x704EF022CA97759F,"Pset_sceNpAuthAbortRequest", (void*)Pset_sceNpAuthAbortRequest },
 { 0x37E9ABEC68D3BEBF,"Pset_sceNpAuthCreateAsyncRequest", (void*)Pset_sceNpAuthCreateAsyncRequest },
 { 0xE9BC05928B184508,"Pset_sceNpAuthCreateRequest", (void*)Pset_sceNpAuthCreateRequest },
 { 0x1FCC06F4193F9CF7,"Pset_sceNpAuthDeleteRequest", (void*)Pset_sceNpAuthDeleteRequest },
 { 0x2B11A43AB4094EA6,"Pset_sceNpAuthGetAuthorizationCode", (void*)Pset_sceNpAuthGetAuthorizationCode },
 { 0xA8051743D19D5A9F,"Pset_sceNpAuthGetAuthorizationCodeA", (void*)Pset_sceNpAuthGetAuthorizationCodeA },
 { 0xB9A07F2E826A1E2B,"Pset_sceNpAuthGetIdToken", (void*)Pset_sceNpAuthGetIdToken },
 { 0x0A871B1D520A3C4F,"Pset_sceNpAuthGetIdTokenA", (void*)Pset_sceNpAuthGetIdTokenA },
 { 0x8234B27F34AC0DC1,"Pset_sceNpAuthPollAsync", (void*)Pset_sceNpAuthPollAsync },
 { 0x3CCDC8642C3FEE6D,"Pset_sceNpAuthSetTimeout", (void*)Pset_sceNpAuthSetTimeout },
 { 0x48AFD2EDD6AA2521,"Pset_sceNpAuthWaitAsync", (void*)Pset_sceNpAuthWaitAsync },
 SPSET_LIB_EXPORT_FUNTCTION_END
};

static const SPSET_LIB_EXPORT_SYSMBOL gSymTable_libSceNpAuthCompat_libSceNpAuth[] =
{
 { 0x2B11A43AB4094EA6,"Pset_sceNpAuthGetAuthorizationCode", (void*)Pset_sceNpAuthGetAuthorizationCode },
 { 0xB9A07F2E826A1E2B,"Pset_sceNpAuthGetIdToken", (void*)Pset_sceNpAuthGetIdToken },
 SPSET_LIB_EXPORT_FUNTCTION_END
};

static const SPSET_EXPORT_LIB gLibTable_libSceNpAuth[] =
{
 {"libSceNpAuth", gSymTable_libSceNpAuth_libSceNpAuth },
 {"libSceNpAuthCompat", gSymTable_libSceNpAuthCompat_libSceNpAuth },
 SPSET_EXPORT_LIB_END
};

static const SPSET_EXPORT_MODULE gExportModule_libSceNpAuth("libSceNpAuth", gLibTable_libSceNpAuth);