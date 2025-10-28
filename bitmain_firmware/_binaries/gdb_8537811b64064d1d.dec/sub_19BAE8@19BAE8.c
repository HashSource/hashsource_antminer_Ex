void **__fastcall sub_19BAE8(void **a1, const char *a2, unsigned int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v9; // r7
  int v10; // r0
  const char *v11; // [sp+Ch] [bp-10h] BYREF
  int v12[2]; // [sp+14h] [bp-8h] BYREF

  v11 = a2;
  if ( !a2 )
    sub_94708("Empty line specification.");
  v5 = sub_19DC08(v12, &v11, off_46D5A4[0], 0);
  v6 = sub_20DB9C(v5);
  v7 = v12[0];
  if ( v6 )
  {
    v9 = sub_20DBDC();
    v10 = sub_20DBF4();
    sub_19B960(a1, v7, a3, 0, v9, v10);
  }
  else
  {
    sub_19B960(a1, v12[0], a3, 0, 0, 0);
  }
  if ( *v11 )
    sub_94708("Junk at end of line specification: %s", v11);
  if ( v12[0] )
    ((void (__fastcall *)(int *))loc_19D17C)(v12);
  return a1;
}
