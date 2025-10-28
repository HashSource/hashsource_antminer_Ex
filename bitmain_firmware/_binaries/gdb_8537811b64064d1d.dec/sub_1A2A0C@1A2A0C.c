int __fastcall sub_1A2A0C(const char **a1, int a2, int a3)
{
  const char *v4; // r5
  _DWORD *v7; // r7
  int v8; // r5
  int result; // r0
  unsigned __int8 *v10[3]; // [sp+8h] [bp-4Ch] BYREF
  char v11; // [sp+14h] [bp-40h]
  int v12; // [sp+18h] [bp-3Ch]
  _DWORD v13[3]; // [sp+20h] [bp-34h] BYREF
  char v14; // [sp+2Ch] [bp-28h]
  int v15; // [sp+30h] [bp-24h]
  _BYTE v16[28]; // [sp+38h] [bp-1Ch] BYREF

  v4 = *a1;
  v10[1] = (unsigned __int8 *)strlen(*a1);
  v10[0] = (unsigned __int8 *)v4;
  v11 = 1;
  v12 = -1;
  v10[2] = 0;
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  v15 = 0;
  v7 = sub_92564((int)sub_1A0FE8, (int)v13);
  v8 = sub_1A1050((int)v16, v10);
  if ( v8
    && (v8 = ((int (__fastcall *)(_DWORD *, _BYTE *, unsigned __int8 **, _DWORD, int, int))loc_1A1ABC)(
               v13,
               v16,
               v10,
               0,
               a2,
               a3)) != 0 )
  {
    sub_1A1688((int)v13, 0);
    sub_92668(v7);
    result = v13[0];
    *a1 = (const char *)v10[0];
  }
  else
  {
    sub_92648(v7);
    return v8;
  }
  return result;
}
