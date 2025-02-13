<<<<<<< HEAD
<img src=https://user-images.githubusercontent.com/39924384/41094707-9e4ead6e-6a25-11e8-9e16-070a3236c8da.png width="100">

**KITE** is an open-source Python/C++ software suite for real-space tight-binding (TB) simulations of electronic structure and bulk quantum transport properties of disordered systems scalable to multi billions of atomic orbitals.

KITE v1.0 is shipped with the following capabilities (for clean and disordered systems in two and three spatial dimensions):

* Quantum Transport: longitudinal and transverse DC conductivities at zero and finite temperature;
* Optical Properties: AC longitudinal conductivity;
* Optical Properties: nonlinear optical susceptibility;
* Unitary time evolution: Gaussian wave-packet propagation (diffusion);
* Electronic Structure: high-resolution density of states (DoS);
* Electronic Structure: local DoS and ARPES;
* Special Features: automated magnetic field in 2D;
* Special Features: lattice perturbations (e.g., strain) and ‘disorder cell’ concept for implementation of multi-orbital/-bond impurities;
* Algorithms: ultra-high-resolution CPGF full spectral (DoS);
* Algorithms: high-resolution CPGF full spectral (finite temperature response functions);
* Algorithms: ultra-high-resolution CPGF single-shot (zero temperature DC conductivity)

For further details on the algorithms and the implementation please refer to S. M. Joao et al., R. Soc. Open Sci. 7, 191809 (2020) [https://royalsocietypublishing.org/doi/full/10.1098/rsos.191809].

## Getting Started

For understanding the main functionalities, how to setup a TB model and disorder and evaluate the **KITE** target functions, we suggest you to check the tutorial [Getting Started](https://quantum-kite.com/category/getting-started/).
More advanced calculations are explained in [Examples](https://quantum-kite.com/category/examples/). After downloading the repository, you can find a copy of the tutorial scripts under the examples folder.

### Prerequisites

Before installing the code, following prerequisites need to be satisfied:

* Eigen3

* Python (version 3.5 or newer)

* HDF5 (version 1.8.13 or newer)

* Pybinding ([see](https://github.com/dean0x7d/pybinding) the requirements)

* GCC compiler (version 4.8.1 or newer, for the wavepacket functionality gcc 8.0 is needed)

* CMake

* Make.

### Installing

After meeting prerequisites and downloading the repository, you can compile the KITE code using the already available Cmake files. Please check the Cmake files first, and if required libraries/packages are installed elsewhere, edit them accordingly. For the full installation procedure, please refer to the [Installation](https://quantum-kite.com/installation/) section.

## Contributors

If you would like to collaborate with us on the KITE project, send us a message through the [Contact](https://quantum-kite.com/contact/) form.

## Authors

**Simão M. João**, **João V. Lopes** (Universidade do Porto, Portugal), **Tatiana G. Rappoport** (Universidade Federal Rio de Janeiro, Brazil), **Miša Anđelković**, **Lucian Covaci** (University of Antwerp, Belgium) and **Aires Ferreira** (University of York, UK).

## License

This project is licensed under the GPL v3 License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

KITE's open source project was funded by The Royal Society through grant NA150043 "*Efficient Numerical Solver for Spin, Charge and Optical Conductivity*" (T. Rappoport and A. Ferreira). KITE's team thanks the partial support from EPSRC (A. Ferreira), The Royal Society (UF130385, A. Ferreira) and FLAG-ERA (TRANS2DTMD, M. Anđelković and L. Covaci). We thank Miguel Dias Costa (HPC at NUS, Singapore), Killian Murphy (HPC at University of York, UK) and Julia Giannella (Web Design) for technical support.
=======
<img src=https://user-images.githubusercontent.com/39924384/41094707-9e4ead6e-6a25-11e8-9e16-070a3236c8da.png width="100">

**KITE** is an open-source Python/C++ software suitable for Large-Scale Tight-Binding (TB) quantum transport calculations.
The code is shipped with the following capabilities:

* Quantum Transport: longitudinal and transverse DC conductivities at zero and finite temperature;
* Optical Properties: AC longitudinal conductivity;
* Optical Properties: nonlinear optical susceptibility;
* Electronic Structure: high-resolution density of states (DoS) in clean and disordered systems;
* Electronic Structure: local density of states and ARPES;
* Special Features: automated magnetic field in 2D;
* Special Features: lattice perturbations (e.g., strain) and ‘disorder cell’ concept for implementation of multi-orbital/-bond impurities;
* Algorithms: ultra-high-resolution CPGF full spectral (DoS);
* Algorithms: high-resolution CPGF full spectral (finite temperature response functions);
* Algorithms: ultra-high-resolution CPGF single-shot (zero temperature DC conductivity)

For further details on the algorithms and the implementation please consult S. M. Joao et al., R. Soc. Open Sci. 7, 191809 (2020) [https://royalsocietypublishing.org/doi/full/10.1098/rsos.191809].

## Getting Started

For understanding the main functionalities of the code, how to setup a model and evaluate the **KITE** target functions, we suggest you to check the tutorial [Getting Started](https://quantum-kite.com/category/getting-started/).
More advanced calculations are explained in [Examples](https://quantum-kite.com/category/examples/). After downloading the repository, you can find the python scripts used throughout the tutorial under the examples folder.

### Prerequisites

Before installing the code, following prerequisites need to be satisfied:

* Eigen3

* Python (version 3.5 or newer)

* HDF5 (version 1.8.13 or newer)

* Pybinding ([see](https://github.com/dean0x7d/pybinding) the requirements)

* GCC compiler (version 4.8.1 or newer, for the wavepacket functionality gcc 8.0 is needed)

* CMake

* Make.

### Installing

After meeting prerequisites and downloading the repository you can compile the KITE code using the already available Cmake files. Please check the Cmake files first, and if required libraries/packages are installed elsewhere, edit them accordingly. For the full installation procedure, go to the [Installation](https://quantum-kite.com/installation/) section.

## Contributors

If you would like to collaborate with us on the KITE project fill free to send us a message through the [Contact](https://quantum-kite.com/contact/) form.

## Authors

**Simão M. João**, **João V. Lopes** (Universidade do Porto), **Tatiana G. Rappoport** (Universidade Federal Rio de Janeiro), **Miša Anđelković**, **Lucian Covaci** (University of Antwerp) and **Aires Ferreira** (University of York).

## Citing KITE

We provide KITE as free software under a GPL license. If you have used KITE for producing results in a scientific publication, please mention the fact that you used it explicitly in the main text. For example, you may use

" the numerical calculations were performed using the KITE code"

to the description of your numerical calculations. In addition, the KITE team would be thankful if you cite the main paper that introduces KITE: S. M. João, M. Anđelković, L.Covaci, T. G. Rappoport, J. M. V. P. Lopes and A.Ferreira. R. Soc. Open Sci. 7, 191809 (2020).

## License

This project is licensed under the GPL v3 License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

KITE's open source project was funded by The Royal Society through grant NA150043 "*Efficient Numerical Solver for Spin, Charge and Optical Conductivity*" (T. Rappoport and A. Ferreira). KITE's team thanks the partial support from EPSRC (A. Ferreira, U York), The Royal Society (UF130385) and FLAG-ERA (TRANS2DTMD, M. Anđelković and L. Covaci, U Antwerp). We thank Miguel Dias Costa (HPC expert, NUS, Singapore), Killian Murphy (Research Software Engineer, University of York, UK) and Julia Giannella (Web Designer) for technical support.
>>>>>>> 87806c7e950f4c0e90330ffbc2f6c59e61f0aa96
