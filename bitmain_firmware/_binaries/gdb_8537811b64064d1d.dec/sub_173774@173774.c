int __fastcall sub_173774(_DWORD *a1)
{
  int result; // r0

  switch ( **(_BYTE **)(sub_171280(a1) + 24) )
  {
    case 2:
    case 3:
    case 4:
    case 0xB:
    case 0xD:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
