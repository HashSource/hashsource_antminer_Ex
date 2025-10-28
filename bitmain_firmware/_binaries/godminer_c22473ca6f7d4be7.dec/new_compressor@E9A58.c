_DWORD *__fastcall new_compressor(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r12

  v4 = calloc(1u, 0x38u);
  if ( !v4 )
    puts("alloc compressor failed!");
  LOWORD(v5) = -26384;
  LOWORD(v6) = -26248;
  HIWORD(v5) = (unsigned int)&dword_E9118 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E91A0 >> 16;
  v4[9] = v5;
  LOWORD(v7) = -26200;
  v4[10] = v6;
  LOWORD(v5) = -26184;
  LOWORD(v6) = -26576;
  HIWORD(v7) = (unsigned int)&loc_E91D0 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E9058 >> 16;
  HIWORD(v5) = (unsigned int)&loc_E91E0 >> 16;
  v4[12] = v5;
  v4[11] = v7;
  v4[13] = v6;
  compressor_init(v4, a1, a2);
  return v4;
}
