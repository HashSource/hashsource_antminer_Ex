size_t __fastcall hs_header_pre_write(int a1, void **a2)
{
  int v2; // r0
  int v3; // r0
  size_t v4; // r0
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  _BYTE v11[20]; // [sp+8h] [bp-1Ch] BYREF
  int v12; // [sp+1Ch] [bp-8h]

  v12 = 0;
  hs_header_padding(a1, (int)v11, 0x14u);
  v2 = sub_25724C((_DWORD **)a2, *(_DWORD *)a1);
  v12 += v2;
  v3 = sub_2572BC(a2, *(_QWORD *)(a1 + 8));
  v12 += v3;
  v4 = sub_257330(a2, v11, 0x14u);
  v12 += v4;
  v5 = sub_257330(a2, (const void *)(a1 + 36), 0x20u);
  v12 += v5;
  v6 = sub_257330(a2, (const void *)(a1 + 68), 0x20u);
  v12 += v6;
  v7 = sub_257330(a2, (const void *)(a1 + 100), 0x20u);
  return v7 + v12;
}
