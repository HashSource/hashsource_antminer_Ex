const void *__fastcall sub_25E528(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD dest[4]; // [sp+14h] [bp-88h] BYREF
  _DWORD v8[12]; // [sp+24h] [bp-78h] BYREF
  _DWORD v9[8]; // [sp+54h] [bp-48h]
  int v10; // [sp+74h] [bp-28h] BYREF
  int v11; // [sp+78h] [bp-24h]
  int v12; // [sp+7Ch] [bp-20h]
  int v13; // [sp+80h] [bp-1Ch]
  int v14; // [sp+84h] [bp-18h]
  int v15; // [sp+88h] [bp-14h]
  int v16; // [sp+8Ch] [bp-10h]
  int v17; // [sp+90h] [bp-Ch]
  unsigned int i; // [sp+94h] [bp-8h]

  sub_25E134(&v10);
  sub_25AAE4(&v10, a1, 1);
  memcpy(dest, a1 + 16, sizeof(dest));
  memcpy(v8, &unk_57DC3C, sizeof(v8));
  sub_25AAE4(&v10, dest, 1);
  v9[0] = v10;
  v9[1] = v11;
  v9[2] = v12;
  v9[3] = v13;
  v9[4] = v14;
  v9[5] = v15;
  v9[6] = v16;
  v9[7] = v17;
  sub_25E134(a3);
  for ( i = 0; i <= 7; ++i )
    dest[i] = v9[i] ^ 0x5C5C5C5C;
  while ( i <= 0xF )
    dest[i++] = 1549556828;
  sub_25AAE4(a3, dest, 0);
  sub_25E134(&v10);
  for ( i = 0; i <= 7; ++i )
    dest[i] = v9[i] ^ 0x36363636;
  while ( i <= 0xF )
    dest[i++] = 909522486;
  sub_25AAE4(&v10, dest, 0);
  sub_25AAE4(&v10, a2, 1);
  sub_25AAE4(&v10, a2 + 16, 1);
  sub_25AAE4(&v10, dword_57DCBC, 0);
  dest[0] = v10;
  dest[1] = v11;
  dest[2] = v12;
  dest[3] = v13;
  v8[0] = v14;
  v8[1] = v15;
  v8[2] = v16;
  v8[3] = v17;
  memcpy(&v8[4], &unk_57DC6C, 0x20u);
  return sub_25AAE4(a3, dest, 0);
}
