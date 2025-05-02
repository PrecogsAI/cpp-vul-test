enum crypto_return_status crypto_set_key(crypto_key key) {
  if (crypto_verify_key(key) == valid_key_provided) {
    // Securely handle the key assignment
    memset(&current_key, 0, sizeof(current_key)); // Clear the previous key securely
    current_key = key; // Assign the new key
    if (current_state == nonce_set) {
      current_state = nonce_and_key_set;
    } else {
      current_state = key_set;
    }
    return valid_key_provided;
  }
  return invalid_key_provided;
}