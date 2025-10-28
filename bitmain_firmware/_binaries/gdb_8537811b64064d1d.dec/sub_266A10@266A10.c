void __fastcall sub_266A10(
        _DWORD *a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        void *src,
        int a10)
{
  _DWORD *v13; // r4
  int v14; // r3
  void *v15; // r4
  _DWORD dest[20]; // [sp+1Ch] [bp-50h] BYREF

  memcpy(dest, src, 0x4Cu);
  v13 = (_DWORD *)sub_171280(a1);
  if ( dest[0] == 2 )
  {
    v14 = dest[2];
    if ( dest[2] )
      v14 = 1;
    dest[0] = v14;
  }
  sub_258BFC();
  if ( (*(_BYTE *)(v13[6] + 1) & 4) != 0 )
  {
    sub_25A440(a6, "<incomplete type>");
    sub_256834(a6);
  }
  else if ( sub_26672C(a6, v13, a3, a4, a8)
         && (*((_DWORD *)src + 16)
          || !((int (__fastcall *)(_DWORD *, int, unsigned int, int, int, int, int, int, void *, int))loc_157DBC)(
                a1,
                a5,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                src,
                a10)) )
  {
    if ( !*((_DWORD *)src + 17) || sub_266670(a1) )
    {
      v15 = sub_92E50();
      (*(void (__fastcall **)(_DWORD *, unsigned int, int, int, int, int, _DWORD *))(a10 + 68))(
        a1,
        a3,
        a5,
        a6,
        a7,
        a8,
        dest);
      sub_92E68((int)v15);
    }
    else
    {
      sub_25A440(a6, "...");
    }
  }
}
