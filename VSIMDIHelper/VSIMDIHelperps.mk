
VSIMDIHelperps.dll: dlldata.obj VSIMDIHelper_p.obj VSIMDIHelper_i.obj
	link /dll /out:VSIMDIHelperps.dll /def:VSIMDIHelperps.def /entry:DllMain dlldata.obj VSIMDIHelper_p.obj VSIMDIHelper_i.obj \
		kernel32.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
.c.obj:
	cl /c /Ox /DREGISTER_PROXY_DLL \
		$<

clean:
	@del VSIMDIHelperps.dll
	@del VSIMDIHelperps.lib
	@del VSIMDIHelperps.exp
	@del dlldata.obj
	@del VSIMDIHelper_p.obj
	@del VSIMDIHelper_i.obj
