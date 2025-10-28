int __fastcall setup_all_chip_grin29(int a1)
{
  const char *v2; // r0
  int v3; // r4
  _BYTE *v4; // r3
  int v5; // r1
  int result; // r0

  LOWORD(v2) = -20132;
  HIWORD(v2) = (unsigned int)" %02x %08x cmn lock failed!" >> 16;
  v3 = 0;
  puts(v2);
  v4 = *(_BYTE **)(a1 + 296);
  v4[2] = 0x80;
  v4[3] = -64;
  *v4 = 0;
  v4[1] = 64;
  *(_DWORD *)(a1 + 240) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_A29E8(a1);
  while ( ++v3 != 4 )
  {
    while ( (v3 & 1) != 0 )
    {
      v5 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + v3++);
      sub_A1D38(a1, v5);
      usleep(0x4E20u);
      if ( v3 == 4 )
        goto LABEL_5;
    }
  }
LABEL_5:
  sub_A2910(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
