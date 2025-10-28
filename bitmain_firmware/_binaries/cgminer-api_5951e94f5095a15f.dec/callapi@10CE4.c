int __fastcall callapi(const char *a1, const char *a2, uint16_t a3)
{
  int *v4; // r0
  char *v5; // r0
  int *v6; // r0
  char *v7; // r0
  int *v8; // r0
  char *v9; // r0
  int *v10; // r0
  char *v11; // r0
  int *v12; // r0
  char *v13; // r0
  size_t v14; // r0
  int *v15; // r0
  char *v16; // r0
  int *v17; // r0
  char *v18; // r0
  int v19; // r3
  _DWORD v24[2]; // [sp+18h] [bp-44h] BYREF
  _DWORD optval[2]; // [sp+20h] [bp-3Ch] BYREF
  struct sockaddr s; // [sp+28h] [bp-34h] BYREF
  ssize_t v27; // [sp+38h] [bp-24h]
  int fd; // [sp+3Ch] [bp-20h]
  struct hostent *v29; // [sp+40h] [bp-1Ch]
  int v30; // [sp+44h] [bp-18h]
  int v31; // [sp+48h] [bp-14h]
  int v32; // [sp+4Ch] [bp-10h]
  void *ptr; // [sp+50h] [bp-Ch]
  int v34; // [sp+54h] [bp-8h]

  v34 = 0;
  ptr = 0;
  v29 = gethostbyname(a2);
  if ( v29 )
  {
    fd = socket(2, 1, 0);
    if ( fd == -1 )
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      printf("Socket initialisation failed: %s\n", v5);
      return 1;
    }
    else
    {
      memset(&s, 0, sizeof(s));
      s.sa_family = 2;
      *(_DWORD *)&s.sa_data[2] = **(_DWORD **)v29->h_addr_list;
      *(_WORD *)s.sa_data = htons(a3);
      if ( connect(fd, &s, 0x10u) >= 0 )
      {
        optval[0] = 1;
        optval[1] = 60;
        v34 = setsockopt(fd, 1, 13, optval, 8u);
        if ( v34 )
        {
          v8 = _errno_location();
          v9 = strerror(*v8);
          printf("cgminer-api, setsocket SO_LINGER failed (%s)\n", v9);
          close(fd);
        }
        v24[0] = 10;
        v24[1] = 0;
        v34 = setsockopt(fd, 1, 21, v24, 8u);
        if ( v34 )
        {
          v10 = _errno_location();
          v11 = strerror(*v10);
          printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n", v11);
          close(fd);
        }
        v34 = setsockopt(fd, 1, 20, v24, 8u);
        if ( v34 )
        {
          v12 = _errno_location();
          v13 = strerror(*v12);
          printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n", v13);
          close(fd);
        }
        v14 = strlen(a1);
        v27 = send(fd, a1, v14, 0);
        if ( v27 > 0 )
        {
          if ( strlen(a1) == v27 )
          {
            v32 = 0xFFFF;
            ptr = malloc(0x10000u);
            if ( !ptr )
            {
              printf("cgminer api: OOM (%d)\n", v32 + 1);
              return 1;
            }
            v31 = 0;
            v30 = 0;
            while ( 1 )
            {
              if ( v32 == v31 )
              {
                v32 += 0xFFFF;
                ptr = realloc(ptr, v32 + 1);
                if ( !ptr )
                {
                  printf("cgminer realloc: OOM (%d)\n", v32 + 1);
                  return 1;
                }
              }
              v27 = recv(fd, (char *)ptr + v31, v32 - v31, 0);
              if ( v27 < 0 )
              {
                v34 = 1;
                v17 = _errno_location();
                v18 = strerror(*v17);
                printf("Recv failed: %s\n", v18);
                goto LABEL_28;
              }
              if ( !v27 )
                break;
              v31 += v27;
              if ( v32 == v31 )
              {
                v19 = v30++;
                if ( v19 <= 1 )
                  continue;
              }
              goto LABEL_28;
            }
            v34 = 1;
            puts("Recv failed: api server close the socket");
LABEL_28:
            *((_BYTE *)ptr + v31) = 0;
            if ( dword_22088 )
              puts((const char *)ptr);
            else
              display((char *)ptr);
            free(ptr);
          }
        }
        else
        {
          v15 = _errno_location();
          v16 = strerror(*v15);
          printf("cgminer api send failed: %s\n", v16);
          v34 = 1;
        }
        close(fd);
        return v34;
      }
      v6 = _errno_location();
      v7 = strerror(*v6);
      printf("Socket connect failed: %s\n", v7);
      return 1;
    }
  }
  else
  {
    printf("Couldn't get hostname: '%s'\n", a2);
    return 1;
  }
}
