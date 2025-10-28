int __cdecl jsonp_dtostr(char *buffer, size_t size, double value, int precision)
{
  double v4; // d0
  int v7; // [sp+Ch] [bp-28h]
  signed int v10; // [sp+20h] [bp-14h]
  int v11; // [sp+24h] [bp-10h]
  _BYTE *src; // [sp+28h] [bp-Ch]
  char *dest; // [sp+2Ch] [bp-8h]
  _BYTE *desta; // [sp+2Ch] [bp-8h]

  v7 = LODWORD(value);
  if ( !LODWORD(value) )
    v7 = 17;
  v10 = snprintf(buffer, size, "%.*g", v7, v4);
  if ( v10 < 0 )
    return -1;
  v11 = v10;
  if ( v10 >= size )
    return -1;
  from_locale(buffer);
  if ( !strchr(buffer, 46) && !strchr(buffer, 101) )
  {
    if ( size <= v10 + 3 )
      return -1;
    buffer[v10] = 46;
    buffer[v10 + 1] = 48;
    buffer[v10 + 2] = 0;
    v11 = v10 + 2;
  }
  dest = strchr(buffer, 101);
  if ( dest )
  {
    desta = dest + 1;
    src = desta + 1;
    if ( *desta == 45 )
      ++desta;
    while ( *src == 48 )
      ++src;
    if ( src != desta )
    {
      memmove(desta, src, v11 - (src - buffer));
      v11 -= src - desta;
    }
  }
  return v11;
}
