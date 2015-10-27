
TangramMFCAppps.dll: dlldata.obj TangramMFCApp_p.obj TangramMFCApp_i.obj
	link /dll /out:TangramMFCAppps.dll /def:TangramMFCAppps.def /entry:DllMain dlldata.obj TangramMFCApp_p.obj TangramMFCApp_i.obj \
		kernel32.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
.c.obj:
	cl /c /Ox /DREGISTER_PROXY_DLL \
		$<

clean:
	@del TangramMFCAppps.dll
	@del TangramMFCAppps.lib
	@del TangramMFCAppps.exp
	@del dlldata.obj
	@del TangramMFCApp_p.obj
	@del TangramMFCApp_i.obj
