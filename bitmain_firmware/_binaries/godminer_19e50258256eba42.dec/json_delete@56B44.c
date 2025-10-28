void __cdecl json_delete(json_t *json)
{
  if ( json )
  {
    switch ( *(_DWORD *)json )
    {
      case 0:
        json_delete_object(json);
        break;
      case 1:
        json_delete_array(json);
        break;
      case 2:
        json_delete_string(json);
        break;
      case 3:
        p_close(json);
        break;
      case 4:
        sub_569A0(json);
        break;
      default:
        return;
    }
  }
}
