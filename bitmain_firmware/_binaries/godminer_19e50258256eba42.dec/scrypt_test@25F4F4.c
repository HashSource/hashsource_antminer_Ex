int __fastcall scrypt_test(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r0
  _BYTE v6[131596]; // [sp-20208h] [bp-2029Ch] BYREF
  unsigned int v7; // [sp+4h] [bp-90h]
  int v8; // [sp+8h] [bp-8Ch]
  int v9; // [sp+Ch] [bp-88h]
  _DWORD v10[8]; // [sp+14h] [bp-80h] BYREF
  _DWORD v11[20]; // [sp+34h] [bp-60h] BYREF
  unsigned int v12; // [sp+84h] [bp-10h]
  _BYTE *v13; // [sp+88h] [bp-Ch]
  unsigned int v14; // [sp+8Ch] [bp-8h]

  v9 = a1;
  v8 = a2;
  v7 = a3;
  sub_25AA40();
  v14 = v3;
  sub_25AA64((unsigned int)v11, v9, 0x13u);
  v11[19] = sub_25AA18(v7);
  v13 = v6;
  sub_25F06C(v11, (int)v6, v10);
  v12 = sub_25AA18(v10[7]);
  if ( v12 <= 0xFFFF )
    return v12 <= v14;
  else
    return -1;
}
