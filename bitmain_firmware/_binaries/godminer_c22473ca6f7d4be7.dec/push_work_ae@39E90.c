int __fastcall push_work_ae(_DWORD *a1, int *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r4
  char *v8; // r3
  int v9; // lr
  int v10; // r12
  char v11; // r2
  void (__fastcall *v12)(_DWORD *, _DWORD *); // r4
  _DWORD v14[2]; // [sp+4h] [bp-90h] BYREF
  char dest[32]; // [sp+Ch] [bp-88h] BYREF
  _BYTE v16[80]; // [sp+2Ch] [bp-68h] BYREF
  int v17; // [sp+80h] [bp-14h]
  int v18; // [sp+84h] [bp-10h]
  int v19; // [sp+88h] [bp-Ch]
  int v20; // [sp+8Ch] [bp-8h]

  strcpy(dest, (const char *)a2[288]);
  v4 = a1[34];
  v5 = *a2;
  v6 = a2[1];
  a1[76] = 1;
  v18 = 0;
  v14[0] = v5;
  v14[1] = v6;
  v7 = (unsigned __int8)(16 * v4);
  v17 = v7 << 24;
  memcpy(v16, a2 + 2, sizeof(v16));
  LOWORD(v8) = 24212;
  v9 = a2[258];
  HIWORD(v8) = (unsigned int)&unk_164D6C >> 16;
  v10 = a2[259];
  v11 = *v8;
  v16[36] = v7;
  v20 = v9;
  v16[37] = v11;
  v19 = v10;
  v12 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[6];
  *v8 = v11 + 1;
  v12(a1, v14);
  return 0;
}
