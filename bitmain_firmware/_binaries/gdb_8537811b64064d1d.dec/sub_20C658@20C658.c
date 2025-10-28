int __fastcall sub_20C658(int a1, int a2, int a3)
{
  int result; // r0
  int *v7; // r4
  void *v8; // r9
  int v9; // r0
  _DWORD v10[6]; // [sp+8h] [bp-4Ch] BYREF
  int v11[4]; // [sp+20h] [bp-34h] BYREF
  int v12; // [sp+30h] [bp-24h] BYREF
  int v13; // [sp+34h] [bp-20h]
  int v14; // [sp+38h] [bp-1Ch]
  int v15; // [sp+3Ch] [bp-18h]
  int v16; // [sp+40h] [bp-14h]
  int v17; // [sp+44h] [bp-10h]
  int v18; // [sp+48h] [bp-Ch]
  int v19; // [sp+4Ch] [bp-8h]

  memset(&v11[1], 0, 12);
  if ( !sub_15E14C(a1, v11) )
    return sub_25A440(a3, "PC unavailable, cannot determine locals.\n");
  v7 = sub_C32D0(a1, 0);
  if ( !v7 )
    return sub_25A440(a3, "No symbol table info available.\n");
  ((void (__fastcall *)(_DWORD *, int))loc_15CFC8)(v10, a1);
  v12 = v10[0];
  v13 = v10[1];
  v14 = v10[2];
  v15 = v10[3];
  v17 = 4 * a2;
  v16 = v10[4];
  v18 = a3;
  v19 = 0;
  sub_15E134(a1);
  v8 = sub_92E50();
  do
  {
    sub_20C4B8(v7, (void (__fastcall *)(int, int, int))sub_20C82C, (int)&v12);
    if ( v7[2] )
      break;
    v7 = (int *)v7[3];
  }
  while ( v7 );
  sub_92E68((int)v8);
  v9 = sub_15FEB4(v12, v13, v14, v15, v16);
  result = sub_15E134(v9);
  if ( !v19 )
    return sub_25A440(a3, "No locals.\n");
  return result;
}
