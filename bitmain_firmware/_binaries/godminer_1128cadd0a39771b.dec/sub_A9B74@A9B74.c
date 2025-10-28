int __fastcall sub_A9B74(int a1, int *a2, _DWORD *a3, int a4)
{
  char v4; // r7
  int v8; // r5
  signed int v10; // r2
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r9
  int v13; // r6
  int v14; // r7
  signed int v16; // [sp+14h] [bp-20h]
  int v17; // [sp+1Ch] [bp-18h] BYREF
  int v18; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+24h] [bp-10h]
  int v20; // [sp+28h] [bp-Ch]
  int v21; // [sp+2Ch] [bp-8h]

  v4 = a4;
  LOBYTE(v20) = 0;
  v19 = 0;
  v21 = 0;
  HIWORD(v20) = 28;
  v18 = 26738688;
  BYTE1(v20) = a4;
  v8 = (*(int (__fastcall **)(int, int *))(a1 + 164))(a1, &v18);
  if ( v8 )
    return 0;
  usleep(0xC350u);
  v10 = *(_DWORD *)(a1 + 204);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v10 >= 1 )
    v10 = 1;
  v21 = 0;
  v16 = v10;
  v11 = (unsigned __int8 *)calloc(v10, 0xCu);
  BYTE1(v20) = v4;
  v12 = v11;
  HIWORD(v20) = 28;
  (*(void (__fastcall **)(int, int *, signed int, unsigned __int8 *, int *))(a1 + 184))(a1, &v18, v16, v11, &v17);
  v13 = v17;
  if ( v17 == 1 )
  {
    if ( a4 == v12[4] )
    {
      v8 = v12[3];
      v14 = v17;
    }
    else
    {
      v14 = 0;
    }
    free(v12);
    if ( *(_DWORD *)(a1 + 328) == 1 )
      v8 -= 64;
    *a2 = v8;
    *a3 = v14;
    return 1;
  }
  else
  {
    free(v12);
    return v13;
  }
}
