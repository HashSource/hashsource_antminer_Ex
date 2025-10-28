int __fastcall sub_24874(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r5
  const char *v6; // r6
  _DWORD *v8; // r0
  int v9; // r0
  const char *v10; // r4
  int v11; // r0
  _DWORD v12[3]; // [sp+0h] [bp-Ch] BYREF

  v3 = a2;
  v4 = sub_187BA0(a2);
  v5 = v4;
  if ( v4 )
  {
    if ( dword_487978 )
    {
      v8 = (_DWORD *)sub_242FF0(v4);
      sub_2594D8(*v8, "displaced: check mode of %.8lx instead of %.8lx\n", *(_DWORD *)(v5 + 204), v3);
    }
    v3 = *(_DWORD *)(v5 + 204);
  }
  if ( (v3 & 1) != 0 )
    return 1;
  v6 = off_46961C[0];
  if ( !strcmp(off_46961C[0], "arm") )
    return 0;
  if ( !strcmp(v6, "thumb") || *(_DWORD *)(sub_163EA0(a1) + 32) )
    return 1;
  v9 = ((int (__fastcall *)(int))loc_21A50)(v3);
  if ( v9 )
    return v9 == 116;
  sub_1B2434(v12, v3);
  if ( v12[0] )
    return (*(unsigned __int8 *)(v12[0] + 32) >> 5) & 1;
  v10 = off_469620[0];
  if ( !strcmp(off_469620[0], "arm") )
    return 0;
  if ( !strcmp(v10, "thumb") )
    return 1;
  if ( !sub_22EB34() )
    return 0;
  v11 = sub_15F734();
  return sub_23794(v11);
}
