int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v4; // r3
  int v5; // r3
  char *nptr; // [sp+Ch] [bp-18h]
  char *nptra; // [sp+Ch] [bp-18h]
  char *nptrb; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  uint16_t v13; // [sp+16h] [bp-Eh]
  const char *v14; // [sp+18h] [bp-Ch]
  const char *v15; // [sp+1Ch] [bp-8h]

  v15 = "summary";
  v14 = "127.0.0.1";
  v13 = 4028;
  v12 = 1;
  if ( argc > 1 && (!strcmp(argv[1], "-?") || !strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) )
  {
    fprintf((FILE *)stderr, "usAge: %s [command [ip/host [port]]]\n", *argv);
    return 1;
  }
  else
  {
    if ( argc > 1 && !strcmp(argv[1], "-o") )
    {
      dword_22088 = 1;
      v12 = 2;
    }
    if ( argc > v12 )
    {
      v4 = v12++;
      nptr = (char *)sub_111C4(argv[v4]);
      if ( *nptr )
        v15 = nptr;
    }
    if ( argc > v12 )
    {
      v5 = v12++;
      nptra = (char *)sub_111C4(argv[v5]);
      if ( *nptra )
        v14 = nptra;
    }
    if ( argc > v12 )
    {
      nptrb = (char *)sub_111C4(argv[v12]);
      if ( *nptrb )
        v13 = atoi(nptrb);
    }
    return callapi(v15, v14, v13);
  }
}
