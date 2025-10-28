int __fastcall push_work_ae(_DWORD *a1, int *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int v8; // lr
  int v9; // r12
  void (__fastcall *v10)(_DWORD *, _DWORD *); // r4
  _DWORD v12[2]; // [sp+4h] [bp-90h] BYREF
  char dest[32]; // [sp+Ch] [bp-88h] BYREF
  _BYTE v14[80]; // [sp+2Ch] [bp-68h] BYREF
  int v15; // [sp+80h] [bp-14h]
  int v16; // [sp+84h] [bp-10h]
  int v17; // [sp+88h] [bp-Ch]
  int v18; // [sp+8Ch] [bp-8h]

  strcpy(dest, (const char *)a2[288]);
  v4 = a1[36];
  v5 = *a2;
  v6 = a2[1];
  a1[78] = 1;
  v16 = 0;
  v12[0] = v5;
  v12[1] = v6;
  v7 = (unsigned __int8)(16 * v4);
  v15 = v7 << 24;
  memcpy(v14, a2 + 2, sizeof(v14));
  v8 = a2[258];
  v9 = a2[259];
  v14[36] = v7;
  v18 = v8;
  v14[37] = byte_166EA4;
  v17 = v9;
  v10 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[6];
  ++byte_166EA4;
  v10(a1, v12);
  return 0;
}
