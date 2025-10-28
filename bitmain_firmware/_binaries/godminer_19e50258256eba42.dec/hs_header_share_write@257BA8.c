size_t __fastcall hs_header_share_write(_DWORD *a1, void **a2)
{
  int v2; // r0
  int v3; // r0
  size_t v4; // r0
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  _DWORD v11[61]; // [sp+8h] [bp-1BCh] BYREF
  _BYTE v12[32]; // [sp+FCh] [bp-C8h] BYREF
  char v13[32]; // [sp+11Ch] [bp-A8h] BYREF
  char v14[128]; // [sp+13Ch] [bp-88h] BYREF
  int v15; // [sp+1BCh] [bp-8h]

  v15 = 0;
  hs_header_sub_encode(a1, v14);
  hs_blake2b_init(v11, 0x20u);
  hs_blake2b_update((int)v11, v14, 0x80u);
  hs_blake2b_final((int)v11, v13, 0x20u);
  hs_blake2b_init(v11, 0x20u);
  hs_blake2b_update((int)v11, v13, 0x20u);
  hs_blake2b_update((int)v11, (char *)a1 + 100, 0x20u);
  hs_blake2b_final((int)v11, v12, 0x20u);
  v2 = sub_25724C((_DWORD **)a2, *a1);
  v15 += v2;
  v3 = sub_2572BC(a2, *((_QWORD *)a1 + 1));
  v15 += v3;
  v4 = sub_257330(a2, a1 + 4, 0x14u);
  v15 += v4;
  v5 = sub_257330(a2, a1 + 9, 0x20u);
  v15 += v5;
  v6 = sub_257330(a2, a1 + 17, 0x20u);
  v15 += v6;
  v7 = sub_257330(a2, v12, 0x20u);
  return v7 + v15;
}
