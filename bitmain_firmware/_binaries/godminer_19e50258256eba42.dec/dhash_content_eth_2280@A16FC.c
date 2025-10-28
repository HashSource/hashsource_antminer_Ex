void *dhash_content_eth_2280()
{
  _DWORD src[6]; // [sp+4h] [bp-20h] BYREF
  void *dest; // [sp+1Ch] [bp-8h]

  src[3] = 0;
  src[0] = 660220;
  src[1] = 660528;
  src[2] = 660840;
  src[4] = "H";
  src[5] = 60;
  dest = calloc(1u, 0x18u);
  memcpy(dest, src, 0x18u);
  return dest;
}
