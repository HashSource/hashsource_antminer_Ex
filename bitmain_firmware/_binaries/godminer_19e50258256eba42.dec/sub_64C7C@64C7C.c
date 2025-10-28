int __fastcall sub_64C7C(char *a1)
{
  char v4[32]; // [sp+1Ch] [bp-28h] BYREF
  int fd; // [sp+3Ch] [bp-8h]

  if ( !a1 )
    return -3;
  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    strcpy(v4, "eth0");
    if ( ioctl(fd, 0x8927u, v4) >= 0 )
    {
      sprintf(
        a1,
        "%02X%02X%02X%02X%02X%02X",
        (unsigned __int8)v4[18],
        (unsigned __int8)v4[19],
        (unsigned __int8)v4[20],
        (unsigned __int8)v4[21],
        (unsigned __int8)v4[22],
        (unsigned __int8)v4[23]);
      return 0;
    }
    else
    {
      perror("ioctl");
      return -2;
    }
  }
  else
  {
    perror("socket");
    return -1;
  }
}
