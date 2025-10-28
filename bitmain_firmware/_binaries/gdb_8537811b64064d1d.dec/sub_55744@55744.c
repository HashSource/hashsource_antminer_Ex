void __fastcall sub_55744(const char *a1, char *a2, const char *a3)
{
  __int64 v4; // r0
  const char *v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r0
  size_t v9; // r4
  void *src; // r6
  int v11; // r3
  int v12; // [sp+4h] [bp-20h]
  const char *v13; // [sp+14h] [bp-10h] BYREF
  void *v14; // [sp+18h] [bp-Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-8h] BYREF

  v13 = a1;
  LODWORD(v4) = &v14;
  HIDWORD(v4) = &v13;
  sub_55418(v4);
  if ( !v13 || !*v13 )
    sub_94708("Missing start address.");
  sub_556D0((int *)&ptr, &v13);
  v6 = v13;
  if ( !v13 || !*v13 )
    sub_94708("Missing stop address.");
  v7 = sub_14CBC4(ptr);
  v8 = sub_14CBC4(v6);
  if ( v7 >= v8 )
    sub_94708("Invalid memory address range (start >= end).");
  v9 = v8 - v7;
  src = (void *)sub_98394(v8 - v7);
  sub_FA86C(v7, src, v9);
  if ( !strcmp(a3, "binary") )
    sub_54F0C((int)v14, a2, src, v11, v9);
  else
    sub_54F80((const char *)v14, a2, (int)a3, v7, src, v12, v9);
  sub_339E8C(src);
  if ( ptr )
    free(ptr);
  if ( v14 )
    free(v14);
}
