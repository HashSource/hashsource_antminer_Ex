int __fastcall sub_1A3C5C(int a1, int a2, int a3)
{
  unsigned int v4; // [sp+14h] [bp-18h]
  unsigned int v5; // [sp+20h] [bp-Ch]

  v5 = (_byteswap_ulong(*(_DWORD *)a3) - a2) << 7;
  v4 = v5 & 0xFE01FFFF
     | (((unsigned __int8)(v5 >> 17)
       - *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + (unsigned int)(unsigned __int8)(v5 >> 17) / *(_DWORD *)(a1 + 468))) << 17);
  *(_BYTE *)a3 = HIBYTE(v4);
  *(_BYTE *)(a3 + 1) = BYTE2(v4);
  *(_BYTE *)(a3 + 2) = BYTE1(v4);
  *(_BYTE *)(a3 + 3) = v4;
  return 0;
}
