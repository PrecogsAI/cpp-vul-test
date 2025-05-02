// Ensure proper memory management to avoid double free vulnerabilities.
static void trigger_double_free() {
    // Example implementation that avoids double free
    int* ptr = new int(42); // Allocate memory
    delete ptr; // Free memory
    ptr = nullptr; // Set pointer to null to avoid double free
}