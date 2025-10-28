void __fastcall sub_239B28(int a1, int a2)
{
  _BYTE *v2; // r3
  int v5; // r2
  unsigned int v6; // r0
  char *v7; // r2
  _BYTE *v8; // r3
  int v9; // r2
  char *v10; // r3
  char *v11; // r2
  int v12; // t1
  char *v13; // r3
  char *v14; // r1
  int v15; // t1
  int v16; // r0
  const char *v17; // r4
  const char *v18; // r0
  void *v19; // [sp+0h] [bp-20h] BYREF
  unsigned int v20; // [sp+4h] [bp-1Ch]
  _DWORD v21[4]; // [sp+8h] [bp-18h] BYREF
  void *ptr; // [sp+18h] [bp-8h] BYREF
  unsigned int v23; // [sp+1Ch] [bp-4h]
  _DWORD v24[5]; // [sp+20h] [bp+0h] BYREF

  v2 = *(_BYTE **)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 8);
  v19 = v21;
  sub_235120(&v19, v2, (int)&v2[v5]);
  v6 = sub_33C6EC(&v19, 46, 0);
  ptr = v24;
  if ( v6 > v20 )
    v7 = (char *)v19 + v20;
  else
    v7 = (char *)v19 + v6;
  sub_235120(&ptr, v19, (int)v7);
  v8 = v19;
  if ( ptr == v24 )
  {
    sub_33B4B4(&v19, &ptr);
    v8 = ptr;
  }
  else
  {
    if ( v19 == v21 )
    {
      v19 = ptr;
      v20 = v23;
      v21[0] = v24[0];
    }
    else
    {
      v19 = ptr;
      v20 = v23;
      v9 = v21[0];
      v21[0] = v24[0];
      if ( v8 )
      {
        ptr = v8;
        v24[0] = v9;
        goto LABEL_8;
      }
    }
    ptr = v24;
    v8 = v24;
  }
LABEL_8:
  v23 = 0;
  *v8 = 0;
  if ( ptr != v24 )
    sub_339E8C(ptr);
  if ( (char *)v19 + v20 != v19 )
  {
    v10 = (char *)v19 - 1;
    v11 = (char *)v19 + v20 - 1;
    do
    {
      v12 = (unsigned __int8)*++v10;
      if ( v12 == 47 )
        *v10 = 95;
    }
    while ( v11 != v10 );
    if ( (char *)v19 + v20 != v19 )
    {
      v13 = (char *)v19 - 1;
      v14 = (char *)v19 + v20 - 1;
      do
      {
        v15 = (unsigned __int8)*++v13;
        if ( v15 == 45 )
          *v13 = 95;
      }
      while ( v14 != v13 );
    }
  }
  sub_259880("static int\n");
  sub_259880("create_feature_%s ", (const char *)v19);
  sub_259880("(struct target_desc *result, long regnum)\n");
  sub_259880("{\n");
  sub_259880("  struct tdesc_feature *feature;\n");
  v16 = *(_DWORD *)(a1 + 4);
  v17 = *(const char **)(a2 + 4);
  v18 = (const char *)sub_3245CC(v16);
  sub_259880("\n  feature = tdesc_create_feature (result, \"%s\", \"%s\");\n", v17, v18);
  if ( v19 != v21 )
    sub_339E8C(v19);
}
