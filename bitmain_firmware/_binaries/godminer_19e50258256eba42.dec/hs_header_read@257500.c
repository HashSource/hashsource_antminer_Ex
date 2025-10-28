bool __fastcall hs_header_read(const void **a1, size_t *a2, _DWORD *a3)
{
  if ( (unsigned __int8)sub_2570B8((_DWORD **)a1, a2, a3) != 1 )
    return 0;
  if ( (unsigned __int8)sub_25713C(a1, a2, a3 + 2) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 4, 0x14u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 9, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 17, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 25, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 33, 0x18u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 39, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 47, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2571BC(a1, a2, a3 + 55, 0x20u) != 1 )
    return 0;
  if ( (unsigned __int8)sub_2570B8((_DWORD **)a1, a2, a3 + 63) != 1 )
    return 0;
  return (unsigned __int8)sub_2570B8((_DWORD **)a1, a2, a3 + 64) == 1;
}
