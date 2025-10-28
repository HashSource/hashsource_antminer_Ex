void **__fastcall sub_19BA14(void **a1, const char *a2, unsigned int a3)
{
  const char *v6; // [sp+Ch] [bp-38h] BYREF
  int v7; // [sp+14h] [bp-30h] BYREF
  _BYTE v8[4]; // [sp+18h] [bp-2Ch] BYREF
  int v9; // [sp+1Ch] [bp-28h]
  int v10; // [sp+28h] [bp-1Ch]

  v6 = a2;
  if ( !a2 )
    sub_94708("Empty line specification.");
  sub_203238(v8);
  sub_19DC08(&v7, &v6, off_46D5A4[0], 0);
  sub_19B960(a1, v7, a3, 0, v9, v10);
  if ( *v6 )
    sub_94708("Junk at end of line specification: %s", v6);
  if ( v7 )
    ((void (__fastcall *)(int *))loc_19D17C)(&v7);
  return a1;
}
