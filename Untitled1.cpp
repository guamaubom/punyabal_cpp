graph TD
    A[Start] --> B[Input bilangan A, B, C]
    B --> C{A > B?}
    C -->|Ya| D{A > C?}
    C -->|Tidak| E{B > C?}
    D -->|Ya| F[A adalah terbesar]
    D -->|Tidak| G[C adalah terbesar]
    E -->|Ya| H[B adalah terbesar]
    E -->|Tidak| G
    F --> I[Output bilangan terbesar]
    G --> I
    H --> I
    I --> J[End]
