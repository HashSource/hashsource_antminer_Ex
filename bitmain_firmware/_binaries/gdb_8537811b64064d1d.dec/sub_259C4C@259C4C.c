void __fastcall sub_259C4C(_BYTE *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r3
  unsigned int v8; // r5
  unsigned int v9; // r3
  int v10; // t1
  int v11; // r3
  int v12; // r0
  size_t v13; // r0
  int v14; // r3

  if ( *(_DWORD *)sub_242FB4() != a2
    || !dword_46DDEC
    || dword_487A50
    || dword_48A9B4 == -1 && dword_48A9B8 == -1
    || !sub_191AE8()
    || (v4 = sub_191AE8(), v5 = sub_19168C(v4), sub_257418(v5)) )
  {
    sub_256878((int)a1, a2);
  }
  else
  {
LABEL_8:
    v6 = (unsigned __int8)*a1;
    if ( *a1 )
    {
      if ( dword_48A9B4 - 1 <= (unsigned int)dword_48A9D0 )
      {
        sub_2598B8();
        v6 = (unsigned __int8)*a1;
      }
      while ( 1 )
      {
        switch ( v6 )
        {
          case 0:
            return;
          case 10:
            dword_48A9D4 = 0;
            sub_259B80(0);
            ++a1;
            ++dword_48A9D0;
            sub_256854(a2);
            goto LABEL_8;
          case 9:
            if ( dword_48A9E0 )
            {
              v11 = dword_48A9C0;
              *(_BYTE *)dword_48A9C0 = 9;
              dword_48A9C0 = v11 + 1;
            }
            else
            {
              sub_256854(a2);
            }
            v8 = (dword_48A9D4 & 0xFFFFFFF8) + 8;
            dword_48A9D4 = v8;
            break;
          default:
            if ( dword_48A9E0 )
            {
              v7 = dword_48A9C0;
              *(_BYTE *)dword_48A9C0 = v6;
              dword_48A9C0 = v7 + 1;
            }
            else
            {
              sub_256854(a2);
            }
            v8 = ++dword_48A9D4;
            break;
        }
        if ( dword_48A9B8 <= v8 )
          break;
LABEL_17:
        v10 = (unsigned __int8)*++a1;
        v6 = v10;
      }
      dword_48A9D4 = 0;
      v9 = ++dword_48A9D0;
      if ( dword_48A9E0 )
      {
        sub_256854(a2);
        if ( dword_48A9B4 - 1 > (unsigned int)dword_48A9D0 )
          goto LABEL_29;
      }
      else if ( v9 < dword_48A9B4 - 1 )
      {
        goto LABEL_17;
      }
      sub_2598B8();
LABEL_29:
      if ( dword_48A9E0 )
      {
        sub_256878(dword_48A9E4, a2);
        v12 = dword_48A9BC;
        *(_BYTE *)dword_48A9C0 = 0;
        sub_256878(v12, a2);
        v13 = strlen((const char *)dword_48A9E4);
        v14 = dword_48A9E0;
        dword_48A9E0 = 0;
        dword_48A9C0 = dword_48A9BC;
        dword_48A9D4 = v8 - v14 + v13;
        *(_BYTE *)dword_48A9BC = 0;
      }
      goto LABEL_17;
    }
  }
}
