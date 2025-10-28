size_t __cdecl utf8_check_full(const char *buffer, size_t size, int32_t *codepoint)
{
  _BYTE v5[5]; // [sp+17h] [bp-Dh]
  size_t i; // [sp+1Ch] [bp-8h]

  *(_DWORD *)v5 = *(unsigned __int8 *)buffer;
  switch ( size )
  {
    case 2u:
      *(_DWORD *)&v5[1] = v5[0] & 0x1F;
      break;
    case 3u:
      *(_DWORD *)&v5[1] = v5[0] & 0xF;
      break;
    case 4u:
      *(_DWORD *)&v5[1] = v5[0] & 7;
      break;
    default:
      return 0;
  }
  for ( i = 1; i < size; ++i )
  {
    v5[0] = buffer[i];
    if ( v5[0] >= 0 || v5[0] > 0xBFu )
      return 0;
    *(_DWORD *)&v5[1] = (*(_DWORD *)&v5[1] << 6) + (v5[0] & 0x3F);
  }
  if ( *(int *)&v5[1] >= 1114112 )
    return 0;
  if ( *(int *)&v5[1] >= 55296 && *(int *)&v5[1] < 57344 )
    return 0;
  if ( size == 2 && *(int *)&v5[1] <= 127 || size == 3 && *(int *)&v5[1] < 2048 || size == 4 && *(int *)&v5[1] < 0x10000 )
    return 0;
  if ( codepoint )
    *codepoint = *(_DWORD *)&v5[1];
  return 1;
}
