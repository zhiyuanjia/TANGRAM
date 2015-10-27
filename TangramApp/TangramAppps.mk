
TangramAppps.dll: dlldata.obj TangramApp_p.obj TangramApp_i.obj
	link /dll /out:TangramAppps.dll /def:TangramAppps.def /entry:DllMain dlldata.obj TangramApp_p.obj TangramApp_i.obj \
		kernel32.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
.c.obj:
	cl /c /Ox /DREGISTER_PROXY_DLL \
		$<

clean:
	@del TangramAppps.dll
	@del TangramAppps.lib
	@del TangramAppps.exp
	@del dlldata.obj
	@del TangramApp_p.obj
	@del TangramApp_i.obj
