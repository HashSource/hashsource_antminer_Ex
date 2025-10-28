int __fastcall scrypt_regenhash(_DWORD *a1, int a2)
{
  _DWORD v5[151]; // [sp+10h] [bp-2025Ch] BYREF
  _DWORD v6[20]; // [sp+20210h] [bp-5Ch] BYREF
  _DWORD *v7; // [sp+20260h] [bp-Ch]
  unsigned int *v8; // [sp+20264h] [bp-8h]

  v5[0] = 0;
  memset(&v5[1], 0, (size_t)"rvn");
  v8 = (unsigned int *)(a2 + 76);
  v7 = a1;
  sub_25AA64((unsigned int)v6, a2, 0x13u);
  v6[19] = sub_25AA18(*v8);
  sub_25F06C(v6, (int)v5, v7);
  return sub_25F328((int)v7, (int)v7);
}
