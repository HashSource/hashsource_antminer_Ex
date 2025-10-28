int __fastcall sub_F0074(int a1, int a2, int a3)
{
  int v6; // r0
  _BYTE v8[4]; // [sp+4h] [bp-28h] BYREF
  _BYTE v9[4]; // [sp+8h] [bp-24h] BYREF
  int (*v10)(); // [sp+Ch] [bp-20h]
  int (__fastcall *v11)(int, int); // [sp+10h] [bp-1Ch]
  int (__fastcall *v12)(int, char *); // [sp+14h] [bp-18h]
  int (*v13)(); // [sp+18h] [bp-14h]
  int (*v14)(); // [sp+1Ch] [bp-10h]
  int (*v15)(); // [sp+20h] [bp-Ch]
  int (*v16)(); // [sp+24h] [bp-8h]

  sub_293E74(v8, v9);
  v10 = sub_EFD20;
  v11 = sub_EFD0C;
  v12 = sub_EFCF8;
  v13 = sub_EFCE8;
  v15 = sub_EFCE0;
  v16 = sub_EFCDC;
  v14 = sub_EFCE4;
  v6 = ((int (__fastcall *)(int, int, int, _BYTE *))loc_F5EC8)(a1, a2, a3, v8);
  return sub_28CC50(v6);
}
