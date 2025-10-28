_DWORD *__fastcall new_graph29(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r12
  int v6; // r0
  int v7; // r3

  v4 = calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  LOWORD(v5) = 31324;
  LOWORD(v6) = 31228;
  LOWORD(v7) = 31032;
  HIWORD(v5) = (unsigned int)&loc_E7284 >> 16;
  HIWORD(v6) = (unsigned int)&loc_E7224 >> 16;
  HIWORD(v7) = (unsigned int)&loc_E7160 >> 16;
  v4[24] = v5;
  LOWORD(v5) = 30824;
  v4[25] = v6;
  LOWORD(v6) = 30960;
  v4[29] = v7;
  LOWORD(v7) = 30356;
  HIWORD(v5) = (unsigned int)&loc_E7090 >> 16;
  HIWORD(v7) = (unsigned int)&loc_E6EBC >> 16;
  HIWORD(v6) = (unsigned int)&loc_E7118 >> 16;
  v4[27] = v6;
  v4[26] = v5;
  v4[28] = v7;
  sub_E7A5C((int)v4, a1, a2);
  return v4;
}
