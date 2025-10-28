size_t __fastcall hs_header_write(int a1, void **a2)
{
  int v5; // [sp+Ch] [bp-8h]
  int v6; // [sp+Ch] [bp-8h]
  size_t v7; // [sp+Ch] [bp-8h]
  size_t v8; // [sp+Ch] [bp-8h]
  size_t v9; // [sp+Ch] [bp-8h]
  size_t v10; // [sp+Ch] [bp-8h]
  size_t v11; // [sp+Ch] [bp-8h]
  size_t v12; // [sp+Ch] [bp-8h]
  size_t v13; // [sp+Ch] [bp-8h]
  size_t v14; // [sp+Ch] [bp-8h]
  size_t v15; // [sp+Ch] [bp-8h]

  v5 = sub_25724C((_DWORD **)a2, *(_DWORD *)a1);
  v6 = sub_2572BC(a2, *(_QWORD *)(a1 + 8)) + v5;
  v7 = sub_257330(a2, (const void *)(a1 + 16), 0x14u) + v6;
  v8 = sub_257330(a2, (const void *)(a1 + 36), 0x20u) + v7;
  v9 = sub_257330(a2, (const void *)(a1 + 68), 0x20u) + v8;
  v10 = sub_257330(a2, (const void *)(a1 + 100), 0x20u) + v9;
  v11 = sub_257330(a2, (const void *)(a1 + 132), 0x18u) + v10;
  v12 = sub_257330(a2, (const void *)(a1 + 156), 0x20u) + v11;
  v13 = sub_257330(a2, (const void *)(a1 + 188), 0x20u) + v12;
  v14 = sub_257330(a2, (const void *)(a1 + 220), 0x20u) + v13;
  v15 = sub_25724C((_DWORD **)a2, *(_DWORD *)(a1 + 252)) + v14;
  return sub_25724C((_DWORD **)a2, *(_DWORD *)(a1 + 256)) + v15;
}
