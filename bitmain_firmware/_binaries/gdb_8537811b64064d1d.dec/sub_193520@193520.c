void __fastcall sub_193520(int a1)
{
  const char *v1; // r0
  char *v2; // r4
  char *v3; // r3
  char *v4; // r0
  int (*v5)(void); // r6
  _DWORD *v6; // r6
  _DWORD *v7; // r0
  void *v8; // r3
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  void *handle; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    sub_94708("No reader name provided.");
  v1 = (const char *)sub_29B938(a1);
  v2 = (char *)v1;
  if ( dword_4879DC )
    sub_94708("JIT reader already loaded.  Run jit-reader-unload first.");
  if ( *v1 != 47 )
  {
    v3 = sub_93168("%s%s%s", (const char *)dword_4879E4, (const char *)&word_39899C, v1);
    v4 = v2;
    v2 = v3;
    free(v4);
  }
  if ( dword_4879D8 )
  {
    v11 = (_DWORD *)sub_242FF0(v1);
    sub_2594D8(*v11, "Opening shared object %s.\n", v2);
  }
  sub_1634E8(&handle, v2);
  v5 = (int (*)(void))sub_16352C(&handle, "gdb_init_reader");
  if ( !v5 )
    sub_94708("Could not locate initialization function: %s.", "gdb_init_reader");
  if ( !sub_16352C(&handle, "plugin_is_GPL_compatible") )
    sub_94708("Reader not GPL compatible.");
  v6 = (_DWORD *)v5();
  if ( *v6 != 1 )
    sub_94708("Reader version does not match GDB version.");
  v7 = sub_98394(8u);
  v8 = handle;
  *v7 = v6;
  dword_4879DC = (int)v7;
  v7[1] = v8;
  v9 = sub_15D7A0();
  v10 = sub_16F67C(v9);
  sub_1933FC(v10);
  if ( v2 )
    free(v2);
}
