int __fastcall sub_89C64(int result, int a2, unsigned int a3)
{
  char v3; // r1
  int v6; // [sp+Ch] [bp-38h]
  _DWORD v7[7]; // [sp+14h] [bp-30h] BYREF
  __int16 v8; // [sp+30h] [bp-14h]
  int v9; // [sp+34h] [bp-10h]
  int v10; // [sp+38h] [bp-Ch]
  int v11; // [sp+3Ch] [bp-8h]

  v6 = result;
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v11 = 0;
  while ( a2 && v11 <= 29 )
  {
    sub_34514C(a2, a3);
    *((_BYTE *)v7 + v11++) = v3 + 48;
    result = sub_344EB8(a2, a3);
    a2 = result;
  }
  v10 = 0;
  v9 = v11 - 1;
  while ( v10 < v11 )
    *(_BYTE *)(v6 + v10++) = *((_BYTE *)v7 + v9--);
  return result;
}
