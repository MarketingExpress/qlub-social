import logo from '@/images/logo.svg';

export const WordmarkLogo: React.FC = () => (
  <svg viewBox='0 0 199.85 66' className='logo logo--wordmark' role='img'>
    <title>Qlub</title>
    <use xlinkHref='#logo-symbol-wordmark' />
  </svg>
);

export const IconLogo: React.FC = () => (
  <svg viewBox='0 0 79 79' className='logo logo--icon' role='img'>
    <title>Qlub</title>
    <use xlinkHref='#logo-symbol-icon' />
  </svg>
);

export const SymbolLogo: React.FC = () => (
  <img src={logo} alt='Qlub' className='logo logo--icon' />
);
