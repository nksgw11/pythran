def omp_in_parallel():
    import omp
    serial = 1
    isparallel = 0

    serial = omp.in_parallel()

    if 'omp parallel num_threads(2)':
        num_threads = omp.get_num_threads()
        if 'omp single':
            isparallel = omp.in_parallel()

    if 'omp parallel':
        if 'omp single':
            pass

    return (not serial and isparallel) or num_threads == 1
