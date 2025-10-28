void __fastcall sub_17F338(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  const char *v6; // r0
  int v7; // r0
  int v8; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  v4 = sub_243C5C(a1);
  v5 = sub_1836B0(v4);
  v6 = sub_93850((const char ***)(v5 + 60), "PATH");
  if ( !v6 )
    v6 = "";
  ptr = (void *)sub_32727C(v6);
  v7 = sub_203A40(a1, &ptr);
  v8 = sub_1836B0(v7);
  sub_93EA0(v8 + 60, "PATH", (int)ptr);
  if ( ptr )
    free(ptr);
  if ( a2 )
    sub_17F300();
}
